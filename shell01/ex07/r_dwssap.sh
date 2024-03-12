#!/bin/sh
cat /etc/passwd | grep -v "^#" | sed '1!n;d' | sed 's/:.*//g' | rev | sort -r | tr '\n' ' ' | sed 's/ /,/g' | sed 's/\(.*\),/\1./' | tr -d '\n'

