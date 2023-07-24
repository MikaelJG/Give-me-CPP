
{
    "name": "cpptemplateproject",
    "version-string": "1.0.0",
    "dependencies": [
        {
            "name": "cxxopts",
            "version>=": "3.1.1"
        },
        {
            "name": "fmt",
            "version>=": "9.1.0"
        },
        {
            "name": "nlohmann-json",
            "version>=": "3.11.2"
        },
        {
            "name": "spdlog",
            "version>=": "1.11.0"
        },
        {
            "name": "catch2",
            "version>=": "2.13.9"
        }
    ],
    "overrides": [
        {
            "name": "catch2",
            "version": "2.13.9"
        }
    ],
    "builtin-baseline": "40619a55c3e76dc4005c8d1b7395071471bb8b96"

    # this baseline is the hexadecimal value
    # of a certain VCPKG git commit

    # this is ridiculously complicated,
    # in this examples here, we git logged the external/vcpkg directory of our project.
}

