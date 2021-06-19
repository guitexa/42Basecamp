#!/bin/sh
ifconfig | grep ether | sed 's/.\{14\}//;s/ .*(Ethernet)//'
