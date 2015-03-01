#!/usr/bin/perl
#
# Copyright 2015 by Denis Erygin,
# denis.erygin@gmail.com
#

use warnings;
use strict;

use constant PORT      => 2302; # Change it with epoch.sh
use constant PATH      => $ENV{'PWD'}.'/'; # Set your epoch server dir
use constant PIDFILE   => PATH.PORT.'.pid';

unless (-f PATH.'arma3server') {
    print STDERR "Can't found server binary!\n";
    exit;
}

if (-f PIDFILE) {
    open  (IN, '<'.PIDFILE) or die "Can't open: $!";
    my $pid = int(<IN>);
    close (IN);

    my $res = `kill -TERM $pid 2>&1`;
    print STDERR $res,"\n" if $res;
   
    unlink (PIDFILE) if (-f PIDFILE);    
}

print STDERR "Restart Arma3 Epoch server...\n";
chdir (PATH);

my $cmd = '/usr/bin/screen -h 20000 -fa -d -m -S epoch '.PATH.'epoch.sh';
my $res = `$cmd`;
print STDERR $res,"\n" if $res;
exit;

