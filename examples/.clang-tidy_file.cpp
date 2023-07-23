
Checks: 'clang-analyzer-*,cppcoreguidelines-*,
        modernize-*,bugprone-*,performance-*,readability-non-const-parameter,
        misc-const-correctness,misc-use-anonymous-namespace,
        google-explicit-constructor,-modernize-use-trailing-return-type,
        -bugprone-exception-escape,-cppcoreguidelines-pro-bounds-constant-array-index,
        -cppcoreguidelines-avoid-magic-numbers,-bugprone-easily-swappable-parameters'


        # modernize-* --------------- includes all warnings in this category
        # -bugprone=exception-escape # - with a '-' char, 
                                     # specifies one omition in the group

WarningsAsErrors: ''
HeaderFilterRegex: '\(src|app\)\/*.\(h|hpp\)'
AnalyzeTemporaryDtors: false
FormatStyle:     none


Checks: 'clang-analyzer-*,cppcoreguidelines-*,
        modernize-*,bugprone-*,performance-*,readability-non-const-parameter,
        misc-const-correctness,misc-use-anonymous-namespace,
        google-explicit-constructor,-modernize-use-trailing-return-type,
        -bugprone-exception-escape,-cppcoreguidelines-pro-bounds-constant-array-index,
        -cppcoreguidelines-avoid-magic-numbers,-bugprone-easily-swappable-parameters'


        # modernize-* --------------- includes all warnings in this category
        # -bugprone=exception-escape # - with a '-' char, 
                                     # specifies one omition in the group

WarningsAsErrors: ''
HeaderFilterRegex: '\(src|app\)\/*.\(h|hpp\)'
AnalyzeTemporaryDtors: false
FormatStyle:     none

