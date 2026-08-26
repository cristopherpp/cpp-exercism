namespace targets {
// TODO: Insert the code for the alien class here
    class Alien {
    public:
        Alien(int x, int y)
        {
            x_coordinate = x;
            y_coordinate = y;
        }
        int get_health()
        {
            return health;
        }
        bool hit()
        {
            if (health > 0)
            {
                health = health - 1;
                return true;
            }
            return false;
        }
        bool is_alive()
        {
            return health > 0;
        }
        bool teleport(int x, int y)
        {
            x_coordinate = x;
            y_coordinate = y;
            return true;
        }
        bool collision_detection(Alien alien)
        {
            return alien.x_coordinate == x_coordinate && alien.y_coordinate == y_coordinate;
        }
        int health{3};
        int x_coordinate{0};
        int y_coordinate{0};
    };
}  // namespace targets