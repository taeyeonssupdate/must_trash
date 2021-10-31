# NachOS

### 更新

```shell
sudo apt-get update -y
sudo apt-get install build-essential gcc-multilib g++-multilib -y
```

### 安裝

```shell
wget http://mll.csie.ntu.edu.tw/course/os_f08/assignment/nachos_40.tar.gz
wget http://mll.csie.ntu.edu.tw/course/os_f08/assignment/mips-decstation.linux-xgcc.gz
wget http://mll.csie.ntu.edu.tw/course/os_f08/assignment/nachos-gcc.diff

tar -zxvf nachos_40.tar.gz
tar zxvf mips-decstation.linux-xgcc.gz

patch -p0 < nachos-gcc.diff

wget https://raw.githubusercontent.com/taeyeonssupdate/must_trash/trash/nachos/list.cc  -N -P NachOS-4.0/code/lib

cd NachOS-4.0/code/build.linux
make depend
make
./nachos
cd ../../coff2noff
make
../code/build.linux/nachos -x halt
```
