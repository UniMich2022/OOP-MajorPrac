All: Shape.cpp SquareCupcake.cpp CircleCupcake.cpp TriangleCupcake.cpp Cupcake.cpp Order.cpp Customer.cpp Display.cpp goodMain.cpp
		g++ Shape.cpp SquareCupcake.cpp CircleCupcake.cpp TriangleCupcake.cpp Cupcake.cpp Order.cpp Customer.cpp Display.cpp goodMain.cpp -o a
Run: a
		./a
Clean: rm a
Test:Shape.cpp SquareCupcake.cpp CircleCupcake.cpp TriangleCupcake.cpp Decoration.cpp Cupcake.cpp Order.cpp Customer.cpp Display.cpp test.cpp
		g++ Shape.cpp SquareCupcake.cpp CircleCupcake.cpp TriangleCupcake.cpp Decoration.cpp Cupcake.cpp Order.cpp Customer.cpp Display.cpp test.cpp -o a

CircleTest: CircleCupcake.cpp CircleTest.cpp Shape.cpp
		g++ CircleCupcake.cpp CircleTest.cpp Shape.cpp -o circle
SquareTest: SquareCupcake.cpp SquareTest.cpp Shape.cpp
		g++ SquareCupcake.cpp SquareTest.cpp Shape.cpp -o square
TriangleTest: TriangleCupcake.cpp TriangleTest.cpp Shape.cpp
		g++ TriangleCupcake.cpp TriangleTest.cpp Shape.cpp -o trig
Cupcake: CircleCupcake.cpp SquareCupcake.cpp TriangleCupcake.cpp Shape.cpp Cupcake.cpp CupTest.cpp
		g++ CircleCupcake.cpp SquareCupcake.cpp TriangleCupcake.cpp Shape.cpp Cupcake.cpp CupTest.cpp -o cup
Order: CircleCupcake.cpp SquareCupcake.cpp TriangleCupcake.cpp Shape.cpp Cupcake.cpp Order.cpp OrderTest.cpp
		g++ CircleCupcake.cpp SquareCupcake.cpp TriangleCupcake.cpp Shape.cpp Cupcake.cpp Order.cpp OrderTest.cpp -o order
Customer: CircleCupcake.cpp SquareCupcake.cpp TriangleCupcake.cpp Shape.cpp Cupcake.cpp Order.cpp Customer.cpp CustomerTest.cpp
		g++ CircleCupcake.cpp SquareCupcake.cpp TriangleCupcake.cpp Shape.cpp Cupcake.cpp Order.cpp Customer.cpp CustomerTest.cpp -o cust
Display: CircleCupcake.cpp SquareCupcake.cpp TriangleCupcake.cpp Shape.cpp Cupcake.cpp Order.cpp Customer.cpp Display.cpp DisplayTest.cpp
		g++ CircleCupcake.cpp SquareCupcake.cpp TriangleCupcake.cpp Shape.cpp Cupcake.cpp Order.cpp Customer.cpp Display.cpp DisplayTest.cpp -o disp
