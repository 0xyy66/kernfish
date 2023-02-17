# kernfish

Simple kernel module that printk a fish.

This is a joke, I'm learning to code kernel modules. 

## Usage

### Make

```
git clone https://github.com/0xyy66/kernfish.git \
cd kernfish \
make
```

### Load module into kernel

Running *ls* you should now have a file named *kerfish.ko*.

```
insmod kernfish.ko
```

Read kernel messages.

```
dmesg
```

### Remove module

```
rmmod kernfish
```
