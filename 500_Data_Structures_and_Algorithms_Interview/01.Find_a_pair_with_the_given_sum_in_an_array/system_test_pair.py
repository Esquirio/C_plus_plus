import subprocess
from colorama import Fore, Style, init

# Initialize colorama
init(autoreset=True)

def compile_c_program():
    compile_command = ["g++", "pair.c"]
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

def calculate_expected_result(target, nums):
    pairs = []
    n = len(nums)
    for i in range(n - 1):
        for j in range(i + 1, n):
            if nums[i] + nums[j] == target:
                pairs.append(f"({nums[i]}, {nums[j]})")
    if pairs:
        return "\n".join(pairs)
    else:
        return "Pair not found"

def compare_output(output, expected):
    if output == expected:
        print(f"{Fore.GREEN}Test passed{Style.RESET_ALL}{Fore.RESET}")
        print(f"{Fore.CYAN}Expected:\tGot:")
        print(f"{Fore.CYAN}--------\t--------")
        expected_lines = expected.split('\n')
        output_lines = output.split('\n')
        for exp, out in zip(expected_lines, output_lines):
            if(exp == "Pair not found" and out == "Pair not found"):
                print(f"{Fore.CYAN}{exp}  {out}{Style.RESET_ALL}{Fore.RESET}")
            else:
                print(f"{Fore.CYAN}{exp}\t\t{out}{Style.RESET_ALL}{Fore.RESET}")
    else:
        print(f"{Fore.RED}Test failed{Style.RESET_ALL}")
        print(f"{Fore.CYAN}Expected:\tGot:")
        print(f"{Fore.CYAN}--------\t--------")
        expected_lines = expected.split('\n')
        output_lines = output.split('\n')
        for exp, out in zip(expected_lines, output_lines):
            if(exp == "Pair not found" and out == "Pair not found"):
                print(f"{Fore.CYAN}{exp}  {Fore.RED}{out}{Style.RESET_ALL}{Fore.RESET}")
            else:
                print(f"{Fore.CYAN}{exp}\t\t{Fore.RED}{out}{Style.RESET_ALL}{Fore.RESET}")

if __name__ == "__main__":
    if compile_c_program():
        test_cases = [
            ["10", "8", "7", "2", "5", "3", "1"],
            ["12", "5", "2", "6", "8", "1", "9"],
            ["10", "8", "7", "2", "6", "3", "4"],
            ["10", "8", "2"],
            ["10", "9", "8", "7", "6", "5", "4", "3", "2", "1", "0"]
        ]
        for args in test_cases:
            target = int(args[0])
            nums = list(map(int, args[1:]))
            expected = calculate_expected_result(target, nums)
            print(f"{Fore.YELLOW}Running with arguments: {args}{Style.RESET_ALL}{Fore.RESET}")
            output = run_c_program(args)
            compare_output(output, expected)
