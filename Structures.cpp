#include <iostream>

using namespace std;

struct Card {
	int face;
	int shape;
	int color;
// 6 bytes of memory
};


int main() {
	struct Card c;
	c.face=1;
	c.shape=0;
	c.color=0;
//	 struct card c={1,0,0}
}

//or


int main() {
	struct Card deck[52] = {{1,0,0},{2,0,0}};
	print("%d", deck.face);
	print("%d", deck.shape)
	print("%d", deck.color)
}

