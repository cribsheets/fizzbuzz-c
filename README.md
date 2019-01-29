# the fizzbuzz exercise

many interviews launch with a fizzbuzz question. it
is a simple problem, intended to weed out programmers
who can't do the simplest tasks in programming.
performing this exercise demonstrates that you know
the difference between a keyboard and a hole in
the ground, at the 'best two out of three' level.

we have chosen to include it here because as a programmer,
you'll see and hear about it so often that you'll see
it in your dreams.

## the exercise

write a program that displays the numbers 0-100, with
the following modifications:

* if a number is divisible by three, write 'fizz'
* if a number is divisible by five, write 'buzz'
* if a number is divisible by both three and five, write 'fizzbuzz'

we've provided a basic framework inside which you can
write the meat of the solution; all you have to do is
finish the exercise.

## in C

in C, you'll need to write the solution as part of a `main`
function in a C source file. we've called this file `fizzbuzz.c`,
and have set up the `main` function with no body.

## setting up

you should have the a C compiler available for your platform
in order to compile and run the solution.

### ubuntu

check to see if gcc is installed:

`which gcc`

if nothing is found, install it with:

`sudo apt install -y gcc`

### mac os x+

check to see if the XCode command line tools are installed:

`xcode-select -p`

if not, install with:

`xcode-select --install`

### cloning this repo

if you have `git` installed (and you should), you can clone
this repo with:

`git clone git@github.com:cribsheets/fizzbuzz-c`

a new directory called `fizzbuzz-c/` will appear in your
current directory.

## compiling the program

if you're moving in a C direction, you should get used to
compiling the source files. in this project, you can
compile your solution with:

ubuntu: `gcc -o fizzbuzz fizzbuzz.c`
mac: `cc -o fizzbuzz fizzbuzz.c`

the `-o fizzbuzz` tells the compiler to output an executable
called `fizzbuzz`.

## running the program

if your program compiles successfully, you should have an
executable file in your directory called `fizzbuzz`. (okay, 
you could've named that whatever.) run this file with:

`./fizzbuzz`

if you've completed the exercise, you should see a list
of numbers, with 3, 6, 9, 12, etc. replaced by the word 'fizz',
5, 10, 20, etc. replaced by 'buzz', and 0, 15, 30, 45, etc. 
replaced by fizzbuzz. congrats! you're ready for your first
lame interview question.

## a basic solution

you can view a very basic solution to this problem in the
`solutions` branch, as fizzbuzz-simple.c. it is by no means
intended to be the optimal or most clever solution, but it
satisfies the rules of the exercise.

to see the solutions branch:

`git checkout solutions`

to return to the master branch:

`git checkout master`

(or just look it up on GitHub.)

## can you do better?

if you have a particularly clever solution, let us know!
we'll add it to the 'clever solutions' section.
