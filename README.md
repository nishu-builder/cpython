Elifnt 3.13.0a1-0.0.4
=====================================

Elifnt is a fork of the [CPython](https://github.com/python/cpython) interpreter. It is a dialect that supports additional features not present in the standard Python interpreter.

It is currently on version 3.13.0a1 (base CPython version)-0.0.4 (Elifnt version).


# Features

Elifnt introduces the following new features:
- Safe attribute access: `?.`
- Safe subscript access: `?[...]`
- Native methods on lists: `list.map`, `list.reduce`, `list.filter`
- Until statements: `till`
- An alternative conditional statement: `elifnt`


# Using Elifnt

Visit the Elifnt website for an in-browser Elifnt interpreter: https://python-elifnt.org

Elifnt base docker images can be found here: https://hub.docker.com/r/nishubuilder/python-elifnt

You can download it from brew: `brew install python-elifnt@3.13.0a1`, after which it will be available as `python-elifnt`

You can also build Elifnt from source. See the [Build Instructions](#build-instructions) section for more details.


# Build Instructions
Build and install as `python-elifnt`:
```
# Clone the repository
git clone git@github.com:nishu-builder/cpython-elifnt.git
cd cpython-elifnt

# Build and install
./configure --prefix=/usr/local/python-elifnt
make
sudo make install
```

It should then be available as `python-elifnt`


# Contributing

Feel free to open issues and submit pull requests to this repository. See the [implementation of Safe Subscript](https://github.com/nishu-builder/cpython-elifnt/pull/3) for an example.


# License
Elifnt is released under the same license as CPython. See the [LICENSE](LICENSE) file for more details. This project is a fork of [CPython](https://github.com/python/cpython). Original copyright and license details can be found in their respective files and documentation. All modifications in Elifnt are made in accordance with the original license and copyright terms of CPython.
