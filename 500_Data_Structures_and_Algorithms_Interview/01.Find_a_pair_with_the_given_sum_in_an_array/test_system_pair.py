import subprocess
import pytest
from colorama import Fore, Style, init

# Initialize colorama
init(autoreset=True)

def compile_c_program(file_name):
    compile_command = ["g++", file_name]
    result = subprocess.run(compile_command, capture_output=True, text=True)
    if result.returncode != 0:
        print(f"{Fore.RED}Compilation failed:{Style.RESET_ALL}{Fore.RESET}")
        print(result.stderr)
        return False
    return True

def run_c_program(args):
    run_command = ["./a.out"] + args
    result = subprocess.run(run_command, capture_output=True, text=True)
    if result.returncode != 0:
        print(f"{Fore.RED}Execution failed:{Style.RESET_ALL}{Fore.RESET}")
        print(result.stderr)
    else:
        return result.stdout.strip()

def parse_output(output):
    if output == "Pair not found":
        return []
    pairs = output.split("\n")
    return [tuple(map(int, pair.strip("()").split(", "))) for pair in pairs]

@pytest.mark.parametrize("args, expected", [
    (["10", "8", "7", "2", "5", "3", "1"], [(8, 2), (7, 3)]),
    (["12", "5", "2", "6", "8", "1", "9"], []),
    (["10", "8", "7", "2", "6", "3", "4"], [(8, 2), (7, 3), (6, 4)]),
    (["10", "8", "2"], [(8, 2)]),
    (["10", "9", "8", "7", "6", "5", "4", "3", "2", "1", "0"], [(9, 1), (8, 2), (7, 3), (6, 4)]),
    (["20", "9", "8", "7", "6", "5", "4", "3", "2", "1", "0"], []),
    (["10", "9", "0", "8", "1", "7", "2", "6", "3", "5", "4"], [(9, 1), (8, 2), (7, 3), (6, 4)])
])
def test_system_pair(file_name, args, expected):
    assert compile_c_program(file_name), "Compilation failed"
    output = run_c_program(args)
    parsed_output = parse_output(output)
    assert sorted(parsed_output) == sorted(expected)

def test_compile(file_name):
    assert compile_c_program(file_name), "Compilation failed"
