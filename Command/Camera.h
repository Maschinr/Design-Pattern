#pragma once
class Camera {
public:
	void setZoom(int zoom) { this->zoom = zoom; }
	int getZoom() { return zoom; }
private:
	int zoom;
};

