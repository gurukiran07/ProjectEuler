
<a href="https://projecteuler.net/profile/Ch3steR.png">
    <img align="right" src="https://projecteuler.net/profile/Ch3steR.png" height=90 />
</a>

Project Euler
=============

Solutions to Project Euler in C++ and Python are avaiable here. The code provided here is for reference only may contain bad code. Add reference to sources which helped me solve the problem in the code as a comment in the format(`Reference : reference_link`). Added `README.md` to some solutions in folder where I felt explanation is needed to really understand what's happening (example : [**`PE#9/README.md`**](https://github.com/gurukiran07/ProjectEuler/blob/main/PE%239/README.md))

Clone answers locally using:
<pre><code><b>gurukiran@Ch3steR</b>:~$ git clone https://github.com/gurukiran07/ProjectEuler.git ProjectEuler</code></pre>

### Code written in:
- **C++14** with gcc version **6.3.0** (MinGW.org **GCC-6.3.0-1**) in windows, in ubuntu g++ (**Ubuntu 9.3.0-10ubuntu2) 9.3.0**
- **Cpython3.8.2**

### General code format for C++:
```C++
#include<iostream>

/*
 * Question written as comment
 */
 
 // Reference : reference_link (Only present for the questions, I took help from external sources)
 void func(){
    ...
 }
 int main(){
    func();
 }
 ```
 
 #### Code is formatted using [`clang-format-9`](https://packages.ubuntu.com/focal/clang-format-9)
- Installing `clang-format-9` in ubuntu.
   <pre><code><b>gurukiran@Ch3steR</b>:~$ sudo apt install clang-format-9</code></pre>
- Running `clang-format-9` to format code.
  <pre><code><b>gurukiran@Ch3steR</b>:~$ clang-format-9 -style=Google -i PE#QN.cpp</code></pre>
 
 
 
#### Running `PE#QN.cpp`<sup>*</sup> in terminal:
<pre><code><b>gurukiran@Ch3steR</b>:~$ g++ --version
g++ (Ubuntu 9.3.0-10ubuntu2) 9.3.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 
<b>gurukiran@Ch3steR</b>:~$ g++ PE#QN.cpp -std=c++14 -o PE#QN && ./PE#QN</code></pre>
<sub> * In `PE#QN.cpp` *QN* means question number, say you want to run 3rd question,then use `PE#3.cpp`.</sub>

When program involves reading file then we use [**`pipe(|)`**](https://en.wikipedia.org/wiki/Pipeline_(Unix)).
<pre><code><b>gurukiran@Ch3steR</b>:~$ cat file_name.txt | ./PE#QN
OR
<b>gurukiran@Ch3steR</b>:~$ echo "contents of the file" | ./PE#QN</code></pre>
 
### General code format for Python:
 
 ```python
 """
 Question written as comment
 """
 
 # Reference : reference_link (Only present for the questions, I took help from external sources)
 
 def func():
     pass
 
 func()
 ```
#### Running `PE#QN.py`<sup>*</sup> in terminal:
<pre><code><b>gurukiran@Ch3steR</b>:~$ python3 --version
Python 3.8.2
<b>gurukiran@Ch3steR</b>:~$ python3 PE#QN.py</code></pre>
<sub> * In `PE#QN.py` *QN* means question number, say you want to run 3rd question,then use `PE#3.py`.
