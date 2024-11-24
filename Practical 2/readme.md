## Objective
In this practical, I explored floating-point arithmetic and developed a foundational understanding of Windows commands, with a focus on file transfer and program compilation.

## File Transfer with SCP
I used the Secure Copy Protocol (SCP) to transfer files between Brightspace, my local computer, and the SCIPROG virtual machine (VM). The following commands were used:
scp Conversion.c sp70@sciprog.training.ichec.ie:  
scp Sum.c sp70@sciprog.training.ichec.ie:  

These commands transferred Conversion.c and Sum.c files to the practical2 directory on the SCIPROG VM.

## Compiling C Files
To compile the files, I used the GNU Compiler Collection (GCC) in the terminal with these commands:
gcc Conversion.c -o conversion 

## Running Executables
Once the files were successfully compiled, I executed the programs using the following commands:
./conversion  
./Sum 

## Conclusion
This practical enhanced my understanding of floating-point arithmetic and introduced me to essential Windows skills for file management and C programming. It provided hands-on experience with file transfers, code compilation, and program execution in a Linux environment.
