# `parent_b`

A small executable mimicking a parent project.

If the above does not ring any bells, check out [CMake PAUL's organization page](https://github.com/cmake-paul) first.

## Building

After cloning this repository to some location `${repo_root}`, do

```bash
cd ${repo_root}
mkdir build
cd build
cmake -G "Ninja Multi-Config" -S .. -B .
cmake --build . --config Release
```

This will build a binary at `${repo_root}/build/Release/main` (other locations apply when using a different generator).

## Example output

After building the binary, executing it will output something similar to

```bash
> ./Release/main
Welcome to application main from project parent_b.

This is util_a, echoing you the following greeting:
'Hello, this is a greeting from platform_b!'

This is util_b, echoing you the following reversed greeting:
'!b_mroftalp morf gniteerg a si siht ,olleH'
```
