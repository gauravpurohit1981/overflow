# Buffer Overflow Exploit

Tutorial and files for the Buffer Overflow exploit. Sources used: 

- https://dhavalkapil.com/blogs/Buffer-Overflow-Exploit/
- http://phrack.org/issues/49/14.html



Note: the purpose of this repo is educational, in the context of security teaching at Newcastle University. The attacks explained here are relatively well known and should not be exploitable in practice. 



# Structure of the repo: 

- doc/TUTORIAL.md is a detailed tutorial on how to exploit the different examples
- step1, step2, step3, step4 and step5 are 32 bits linux binaries which are vulnerable to the buffer overflow. They have been tested on a standard Kali Linux 64 bits amd. These binaries can be exploited as a regular user, but setup.sh needs to be run as root first for step5. 
- exploit generates the payload for step5. 
- src/ contains the source code for the different binaries. 

