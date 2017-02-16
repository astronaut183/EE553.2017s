Microsoft Windows [版本 10.0.10586]
(c) 2016 Microsoft Corporation。保留所有权利。

e:\GitHub\EE553.2017s>gcc -Wall -o tests tests tests.c
gcc -Wall -o tests tests tests.c
gcc: error: tests.c: No such file or directory

e:\GitHub\EE553.2017s>gcc -Wall -o tests
gcc -Wall -o tests
gcc: fatal error: no input files
compilation terminated.

e:\GitHub\EE553.2017s>gcc -wall -o tests.c tests
gcc -wall -o tests.c tests
gcc: error: unrecognized command line option '-wall'; did you mean '-Wall'?

e:\GitHub\EE553.2017s>gcc -Wall -o tests.c tests
gcc -Wall -o tests.c tests
tests: file not recognized: File format not recognized
collect2.exe: error: ld returned 1 exit status

e:\GitHub\EE553.2017s>gcc -Wall -o tests.cpp tests
gcc -Wall -o tests.cpp tests
tests: file not recognized: File format not recognized
collect2.exe: error: ld returned 1 exit status

e:\GitHub\EE553.2017s>gcc -Wall -o tests.c tests
gcc -Wall -o tests.c tests
tests: file not recognized: File format not recognized
collect2.exe: error: ld returned 1 exit status

e:\GitHub\EE553.2017s>gcc tests -o tests.cpp
gcc tests -o tests.cpp
tests: file not recognized: File format not recognized
collect2.exe: error: ld returned 1 exit status

e:\GitHub\EE553.2017s>gcc tests -o
gcc tests -o
gcc: error: missing filename after '-o'

e:\GitHub\EE553.2017s>gcc tests.cpp
gcc tests.cpp
tests.cpp:1:20: error: stray '\260' in program
 Microsoft Windows [版本 10.0.10586]
                    ^
tests.cpp:1:21: error: stray '\346' in program
 Microsoft Windows [版本 10.0.10586]
                     ^
tests.cpp:1:22: error: stray '\261' in program
 Microsoft Windows [版本 10.0.10586]
                      ^
tests.cpp:1:23: error: stray '\276' in program
 Microsoft Windows [版本 10.0.10586]
                       ^
tests.cpp:1:25: error: too many decimal points in number
 Microsoft Windows [版本 10.0.10586]
                         ^~~~~~~~~~
tests.cpp:2:31: error: stray '\241' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                               ^
tests.cpp:2:32: error: stray '\243' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                ^
tests.cpp:2:33: error: stray '\261' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                 ^
tests.cpp:2:34: error: stray '\243' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                  ^
tests.cpp:2:35: error: stray '\301' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                   ^
tests.cpp:2:36: error: stray '\364' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                    ^
tests.cpp:2:37: error: stray '\313' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                     ^
tests.cpp:2:38: error: stray '\371' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                      ^
tests.cpp:2:39: error: stray '\323' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                       ^
tests.cpp:2:40: error: stray '\320' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                        ^
tests.cpp:2:41: error: stray '\310' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                         ^
tests.cpp:2:42: error: stray '\250' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                          ^
tests.cpp:2:43: error: stray '\300' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                           ^
tests.cpp:2:44: error: stray '\373' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                            ^
tests.cpp:2:45: error: stray '\241' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                             ^
tests.cpp:2:46: error: stray '\243' in program
 (c) 2016 Microsoft Corporation。保留所有权利。
                                              ^
tests.cpp:4:3: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -Wall -o tests tests tests.c
   ^
tests.cpp:4:10: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -Wall -o tests tests tests.c
          ^
tests.cpp:8:3: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -Wall -o tests
   ^
tests.cpp:8:10: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -Wall -o tests
          ^
tests.cpp:13:3: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -wall -o tests.c tests
   ^
tests.cpp:13:10: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -wall -o tests.c tests
          ^
tests.cpp:15:46: warning: character constant too long for its type
 gcc: error: unrecognized command line option '-wall'; did you mean '-Wall'?
                                              ^~~~~~~
tests.cpp:15:68: warning: character constant too long for its type
 gcc: error: unrecognized command line option '-wall'; did you mean '-Wall'?
                                                                    ^~~~~~~
tests.cpp:17:3: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -Wall -o tests.c tests
   ^
tests.cpp:17:10: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -Wall -o tests.c tests
          ^
tests.cpp:22:3: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -Wall -o tests.cpp tests
   ^
tests.cpp:22:10: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -Wall -o tests.cpp tests
          ^
tests.cpp:27:3: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -Wall -o tests.c tests
   ^
tests.cpp:27:10: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc -Wall -o tests.c tests
          ^
tests.cpp:32:3: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc tests -o tests.cpp
   ^
tests.cpp:32:10: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc tests -o tests.cpp
          ^
tests.cpp:37:3: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc tests -o
   ^
tests.cpp:37:10: error: stray '\' in program
 e:\GitHub\EE553.2017s>gcc tests -o
          ^
tests.cpp:39:36: warning: multi-character character constant [-Wmultichar]
 gcc: error: missing filename after '-o'
                                    ^~~~
tests.cpp:41:3: error: stray '\' in program
 e:\GitHub\EE553.2017s>
   ^
tests.cpp:41:10: error: stray '\' in program
 e:\GitHub\EE553.2017s>
          ^
tests.cpp:1:1: error: 'Microsoft' does not name a type
 Microsoft Windows [版本 10.0.10586]
 ^~~~~~~~~
tests.cpp:15:55: error: 'did' does not name a type
 gcc: error: unrecognized command line option '-wall'; did you mean '-Wall'?
                                                       ^~~

e:\GitHub\EE553.2017s>gcc test.cpp
gcc test.cpp
C:\Users\56887\AppData\Local\Temp\ccwnl7DP.o:test.cpp:(.text+0x1c): undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)'
C:\Users\56887\AppData\Local\Temp\ccwnl7DP.o:test.cpp:(.text+0x3b): undefined reference to `std::ios_base::Init::~Init()'
C:\Users\56887\AppData\Local\Temp\ccwnl7DP.o:test.cpp:(.text+0x6b): undefined reference to `std::ios_base::Init::Init()'
C:\Users\56887\AppData\Local\Temp\ccwnl7DP.o:test.cpp:(.rdata$.refptr._ZSt4cout[.refptr._ZSt4cout]+0x0): undefined reference to `std::cout'
collect2.exe: error: ld returned 1 exit status

e:\GitHub\EE553.2017s>gcc pointer1.cpp 
gcc pointer1.cpp 
C:\Users\56887\AppData\Local\Temp\cc2LdVtf.o:pointer1.cpp:(.text+0x4a): undefined reference to `std::ostream::operator<<(void const*)'
C:\Users\56887\AppData\Local\Temp\cc2LdVtf.o:pointer1.cpp:(.text+0x6f): undefined reference to `std::ostream::operator<<(void const*)'
C:\Users\56887\AppData\Local\Temp\cc2LdVtf.o:pointer1.cpp:(.text+0x7e): undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)'
C:\Users\56887\AppData\Local\Temp\cc2LdVtf.o:pointer1.cpp:(.text+0x89): undefined reference to `std::ostream::operator<<(void const*)'
C:\Users\56887\AppData\Local\Temp\cc2LdVtf.o:pointer1.cpp:(.text+0x96): undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char)'
C:\Users\56887\AppData\Local\Temp\cc2LdVtf.o:pointer1.cpp:(.text+0xb6): undefined reference to `std::ostream::operator<<(void const*)'
C:\Users\56887\AppData\Local\Temp\cc2LdVtf.o:pointer1.cpp:(.text+0xd6): undefined reference to `std::ios_base::Init::~Init()'
C:\Users\56887\AppData\Local\Temp\cc2LdVtf.o:pointer1.cpp:(.text+0x106): undefined reference to `std::ios_base::Init::Init()'
C:\Users\56887\AppData\Local\Temp\cc2LdVtf.o:pointer1.cpp:(.rdata$.refptr._ZSt4cout[.refptr._ZSt4cout]+0x0): undefined reference to `std::cout'
1 exit status

e:\GitHub\EE553.2017s>g++ pointer1.cpp 
g++ pointer1.cpp 

e:\GitHub\EE553.2017s>ls
ls
'ls' 不是内部或外部命令，也不是可运行的程序
或批处理文件。

e:\GitHub\EE553.2017

e:\GitHub\EE553.2017s>a.exe
a.exe
0x61fe340x61fe30 0x61fe30
0x61fe30
e:\GitHub\EE553.2017s>