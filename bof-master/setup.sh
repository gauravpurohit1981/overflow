apt-get -y install zsh
mv /bin/sh /bin/sh.old
ln -s /bin/zsh /bin/sh
sysctl -w kernel.randomize_va_space=0

chown root.root step5
chmod 4755 step5
