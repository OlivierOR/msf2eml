# msf2eml

Extract mails in the eml format and numbered from an msf or mbox files.
The msf2eml.sh is the same program in bash, but it takes longer to execute :) .
While it takes a few minutes to write it
instead in c language which could takes hours ! 

At the end, the program written in c is faster and worth to code !

1 - Prerequisite :

- Have a linux with the compilator ggc. It works also on MacOs.
- Find the msf files you want to extract mails from.

2 - How to ?

Compile the program like this :

gcc msf2eml.c -o msf2eml

Get the msf file from thunderbird for example to the directory where the program is.
Rename it with the name "fichier.msf" and you can execute the program after like this :

./msf2eml

It will extract all mails from the fichier.msf to numbered emails with the ".eml" extension.

At the screen you will see the mail's number processed.

Have fun !!
