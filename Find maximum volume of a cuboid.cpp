double maxVolume(double perimeter, double area) {
        // code here
        double length = (perimeter - sqrt(perimeter*perimeter - 24*area))/12;
        
        double height = perimeter/4 - 2*length;
        double volume = length * length * height;
        
        return volume;
    }
