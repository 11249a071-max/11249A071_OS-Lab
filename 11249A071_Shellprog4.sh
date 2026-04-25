echo "Enter number of terms:"
read n

a=0
b=1
i=1

echo "Fibonacci Series:"

while [ $i -le $n ]
do
    echo -n "$a "
    c=$((a + b))
    a=$b
    b=$c
    i=$((i + 1))
done