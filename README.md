## PathPlanning_AI2Assignment2

*Language*: PDDL

*Planning engine*: [popf3-clp](https://github.com/popftif/popf-tif)

## Installation

You only need to install the required libraries:
```sh
sudo apt-get install cmake coinor-libclp-dev coinor-libcoinutils-dev coinor-libosi-dev coinor-libcbc-dev coinor-libcgl-dev doxygen bison flex
```

There is no need to compile the `popf3-clp` since it is already compiled in the root folder.

## Usage

To run the program is necessary to be into the folder of the assignment and to open a terminal window; after that just run this:
```sh
./popf3-clp -x ./visits_domain/dom1.pddl ./visits_domain/prob1.pddl ./visits_module/build/libVisits.so ./visits_domain/region
```

## Notice

You may have to add execution privileges to the following files:
```sh
sudo chmod +x popf3-clp
```

## Solution

![Screen solution AIRO2](https://github.com/ClousTom/PathPlanning_AI2Assignment2/assets/117213899/9ef86868-28de-48a7-a505-9a11ae6230b6)
