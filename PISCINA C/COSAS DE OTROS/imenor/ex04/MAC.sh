#!/bin/sh
ifconfig | grep 'ether ' | cut -b 8- |  tr -d ' '
