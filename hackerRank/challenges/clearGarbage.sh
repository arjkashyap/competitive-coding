#/bin/bash

ls  | grep cpp -v | grep sh -v | grep txt -v > objFiles.txt

while read LINE
    do rm "$LINE"
done < objFiles.txt  

