///Type 1:
struct Hash {
	ll val1 = 0, val2 = 0;
	ll base1 = 1827017, base2 = 5195977;
	ll mod1 = 100888001, mod2 = 133767331;
	void push(int num) {
		val1 *= base1; val1 += num; val1 %= mod1;
		val2 *= base2; val2 += num; val2 %= mod2;
	}
	bool operator < (const Hash& p) const {
		if(val1 == p.val1) return val2 < p.val2;
		return val1 < p.val1;
	}
	bool operator == (const Hash &p) const {
		return val1 == p.val1 && val2 == p.val2;
	}
};
Hash x; // u can push many  integers in x like x.push(tmp);
map<Hash,int>cnt; //can be used
.............................................................................
//Type 2 : (High secured for hack)
///Hash Template
mt19937 mt_rand(chrono::high_resolution_clock::now().time_since_epoch().count());
const int HS=3;
int mod[HS];
struct hash_number{
    int a[HS];
    hash_number(){ fill(a,a+HS,0); }
    hash_number(long long x){
        for(int i=0;i<HS;i++)a[i]=(x%mod[i]+mod[i])%mod[i];
    }
    hash_number operator+(hash_number x){
        hash_number res;
        res.a[0]=(a[0]+x.a[0])%mod[0];
        res.a[1]=(a[1]*1ll*x.a[1])%mod[1];
        res.a[2]=(a[2]+x.a[2])%mod[2];
        return res;
    }
    bool operator==(const hash_number& x)const {
        for(int i=0;i<HS;i++)if(a[i]!=x.a[i])return 0;
        return 1;
    }
};
hash_number hash_id[M],yo;
/*in main 
 mod[0]=998244353;mod[1]=1e9+7;
 mod[2]=std::uniform_int_distribution<int>(1e8,1e9)(mt_rand);
  std::uniform_int_distribution<long long>rg(1,1e18);
    f(i,1,n)
    {
        hash_id[i]=hash_number(rg(mt_rand));
    } 
   */
///......................................................................................
