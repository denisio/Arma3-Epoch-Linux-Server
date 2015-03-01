# Arma3-Epoch-Linux-Server
A private hive Arma3 Epoch 0.2.5.2 server on Linux (Steam)

# Installation instructions

1. The following programs must be installed on your Linux system: screen, redis, perl.
   <pre># apt-get install perl screen redis</pre>

2. Download and unpack steamcmd (http://media.steampowered.com/installer/steamcmd_linux.tar.gz)

3. Download Arma 3 Dedicated Server using steamcmd:
   <pre>
   $ steamcmd/steamcmd.sh +login STEAM_USERNAME STEAM_PASSWORD +force_install_dir /home/user/epoch
   > app_update 233780 validate
   > quit
   </pre>
   Download and install Arma3 Epoch Mod 0.2.5.2 (http://epochmod.com/download.php).

4. Install the required packages:<br>
   $ sudo apt-get install libhiredis-dev<br>
   $ sudo apt-get install libstdc++6<br>
   $ sudo apt-get install g++-multilib<br>
   For 64-bit only:<br>
   $ sudo apt-get install lib32stdc++6

5. Check the system stack size:<br>
   $ ulimit -s<br>
   8192<br>
   $ sudo cat /etc/security/limits.conf | grep stack<br>
   *   soft  stack  8192<br>
   *   hard  stack  8192

6. Run ./epoch.sh for test<br>
   Watch the messages - they might inform you whether your installation failed!

7. Run ./restarter.pl<br>
   $ screen -r<br>
   Press Ctrl+A+D to detach the screen.

8. https://community.bistudio.com/wiki/Arma_3_Dedicated_Server

Please do not forget that the production server must run by "restarter.pl" !
