#include <stdio.h>
#include <stack>
using namespace std;

int main()
{

	int tk,cnt=0;
	unsigned long long fact[22];
	long long x;

	fact[0] = 1;

	for (int i = 1; i <= 20; i++) {
		fact[i] = fact[i-1] * i;
	}
	scanf("%d", &tk);
	while(tk--)
        {
            cnt++;
		scanf("%lld", &x);
		stack <int> s;
		int i = 20;
		while(i >= 0) {
			if(fact[i] <=  x) {
				x -= fact[i];
				s.push(i);
			}
			i--;
			}
		if(x == 0) {
			printf("Case %d: ", cnt);
			while(s.size() != 1) {
				printf("%d!+", s.top());
				s.pop();
			}
			printf("%d!\n", s.top());
			s.pop();
		}

		else printf("Case %d: impossible\n", cnt);
	}

return 0;
}
