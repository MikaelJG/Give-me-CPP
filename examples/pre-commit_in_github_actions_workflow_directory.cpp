
name: pre-commit

on:
    pull_request:
    push:
        branches: [ main, master ]

jobs:
    pre-commit:
        runs-on: ubuntu-latest
        steps:
        - uses: actions/checkout@v2
        - uses: actions/setup python@v2
        - uses: pre-commit/action@2.0.0

