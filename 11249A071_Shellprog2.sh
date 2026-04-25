echo "Enter two numbers:"
read a b

if [ $a -gt $b ]
then
    echo "Biggest is $a"
else
    echo "Biggest is $b"
fi