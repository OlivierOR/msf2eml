cat fichier.msf | while  read ligne ; do

if [[ $ligne != "From -"* ]]; then
echo $ligne >> "$i".eml
else 
i=$(($i+1))
echo $i
echo $line>>"$i".eml
fi

done
