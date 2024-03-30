#pragma once

class Point2D {
public:
	int x;
	int y;
	Point2D() {
		x = 0;
		y = 0;
	}

	void symmetryChange() {
		x = -x;
		y = -y;
	}

	int findQuarter() {
		int quarter;
		if (x == 0 && y == 0) {
			quarter = 0;
		}
		else if (x > 0 && y > 0) {
			quarter = 1;
		}
		else if (x < 0 && y > 0) {
			quarter = 2;
		}
		else if (x < 0 && y < 0) {
			quarter = 3;
		}
		else {
			quarter = 4;
		}

		return quarter;
	}
};