# c++ 프로젝트

## 초기 셋팅

```json
    //settings.json에 추가 c++과 python
    {
        "team.showWelcomeMessage": false,
        "javascript.implicitProjectConfig.experimentalDecorators": true,
        "C_Cpp.updateChannel": "Insiders",
        "code-runner.executorMap": {
            "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
            "python": "set PYTHONIOENCODING=utf8 && python",
        },
        "terminal.integrated.shell.windows": "C:\\Windows\\sysnative\\cmd.exe",
        "code-runner.runInTerminal": true,
        "terminal.integrated.shellArgs.windows": ["/K", "chcp 65001"]
    }
```