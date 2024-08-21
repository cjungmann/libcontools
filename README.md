# CONTOOLS PROJECT

This project provides a set of wrappers around console interactions
to facilitate access to a console's keyboard and screen.

This README is a quick and minimal effort to prepare the project to
be uploaded to Github.

## DOWNLOAD and INSTALL

One of the following two commands to clone it:
~~~sh
git clone git@github.com:cjungmann/lib_contools.git
git clone https://www.github.com/cjungmann/lib_contools.git
~~~

Compile the project to create both the shared and static libraries.
~~~sh
cd lib_contools
make
~~~

Many projects will clone the project in a subdirectory and link
to the static library.  In these cases, there is no need to install
the project.

However, installing the project will make the shared library
available to other projects, and will also install a rudimentary
man page that can help developers use the library.
~~~sh
sudo make install
man 3 contools
~~~
