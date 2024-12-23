def pytest_addoption(parser):
    parser.addoption("--file_name", action="store", default="default name")


def pytest_generate_tests(metafunc):
    # This is called for every test. Only get/set command line arguments
    # if the argument is specified in the list of test "fixturenames".
    option_value = metafunc.config.option.file_name
    if 'file_name' in metafunc.fixturenames and option_value is not None:
        metafunc.parametrize("file_name", [option_value])