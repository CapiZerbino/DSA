clear
echo "###################################################################################"
echo "##############  Simple Examples using DSA-Framework for C++         ###############"
echo "###################################################################################"

echo "[1] removing previous output ..."
rm -f ./examples/bin/*

echo "[2] building examples, please wait ..."
g++ -std=c++11 ./examples/src/SingLinkedList.cpp ./dsacpp/src/geom/*.cpp -I ./dsacpp/include -o ./examples/bin/SingLinkedList
g++ -std=c++11 ./examples/src/intro/lecture1.cpp ./dsacpp/src/geom/*.cpp -I ./dsacpp/include -o ./examples/src/intro/lecture1
g++ -std=c++11 ./examples/src/intro/pointer.cpp ./dsacpp/src/geom/*.cpp -I ./dsacpp/include -o ./examples/src/intro/pointer

echo "###################################################################################"
echo "[3] running examples"


echo "\n"
echo "SingLinkedList program:"
./examples/bin/SingLinkedList
