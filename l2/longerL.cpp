#include "Lish.h"

using namespace std;

Tlist longerQ(Tlist& Xs, Tlist& Ys)
{
	Tlist lX = Xs;
	Tlist lY = Ys;
	Tlist p;

	int i = 0;
	int j = 0;
	while (lX != nullptr)
	{
		bool flag = false;
		while (lY != nullptr)
		{
			if (lX->data == lY->data)
			{
				flag = true;
				j += 1;
				
				break;
			}
			else
			{
				lX = lX->next;
				lY = lY->next;
			}
		if (!flag)
		{
			i = 0;
		}
		}

	}
}