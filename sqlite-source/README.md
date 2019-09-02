# How to install SQLite3

## Check directory 
- Compile 이하의 command 는 sqlite source code directory 의 하위 디렉토리인 `sqlite-source` direcory에서 수행한다.


## Compile 
```bash
$ mkdir build
$ cd build
$ ../sqlite-src-3290000/configure
$ make -j4  # -j: the number of cores
$ sudo make install
```

## Test
```bash
# check sqlite version
$ sqlite --version

# table creation test
$ sqlite3 [db path]/[db name]
sqlite> create table test (a int, b int);
sqlite> insert into test values (1, 2);
sqlite> select * from test;
1|2
sqlite> .quit

# reopen and test
$ sqlite3 [db path]/[db name]
sqlite> select * from test;
1|2
sqlite> .quit
```
