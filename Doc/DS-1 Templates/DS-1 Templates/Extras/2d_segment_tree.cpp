
struct SegmentTree2d {
	int n, m;
	vector <vector <int> > t;

	SegmentTree2d(int n, int m) : n(n), m(m) {
		t.resize(n << 2, vector <int> (m << 2, 0));
	}

	void update_y(int vy, int vx, int lx, int rx, int ly, int ry, int x, int y, int new_val) {
		if(ly == ry) {
			if(lx == rx) {
				t[vx][vy] = new_val;
			} else {
				t[vx][vy] = min(t[vx * 2][vy], t[vx * 2 + 1][vy]);
			}
		} else {
			int my = (ly + ry) >> 1;
			if(y <= my) update_y(vy * 2, vx, lx, rx, ly, my, x, y, new_val);
			else 		update_y(vy * 2 + 1, vx, lx, rx, my + 1, ry, x, y, new_val);
			t[vx][vy] = min(t[vx][vy * 2], t[vx][vy * 2 + 1]);
		} 
	}
	void update_x(int vx, int lx, int rx, int x, int y, int new_val) {
		if(lx != rx) {
			int mx = (lx + rx) >> 1;
			if(x <= mx) update_x(vx * 2, lx, mx, x, y, new_val);
			else 		update_x(vx * 2 + 1, mx + 1, rx, x, y, new_val);
		}
		update_y(1, vx, lx, rx, 1, m, x, y, new_val);
	}

	int query_y(int vx, int vy, int tly, int try_, int ly, int ry) {
		if (ly > ry)  return INF;
		if (ly == tly && try_ == ry)
			return t[vx][vy];
		int tmy = (tly + try_) / 2;
		return min(query_y(vx, vy*2, tly, tmy, ly, min(ry, tmy)), query_y(vx, vy*2+1, tmy+1, try_, max(ly, tmy+1), ry));
	}
	int query_x(int vx, int tlx, int trx, int lx, int rx, int ly, int ry) {
		if (lx > rx) return INF;
		if (lx == tlx && trx == rx)
			return query_y(vx, 1, 1, m, ly, ry);
		int tmx = (tlx + trx) / 2;
		return min(query_x(vx*2, tlx, tmx, lx, min(rx, tmx), ly, ry), query_x(vx*2+1, tmx+1, trx, max(lx, tmx+1), rx, ly, ry));
	}

};
