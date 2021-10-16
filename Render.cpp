#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::string;

class Render {

    public:
        Render(int h, int w) {
            this->terminal_height = h;
            this->terminal_width = w;

        }

        /*
        Sets up the board
        */
        void create_board() {
            vector<vector<int>> new_board;
            for(int h = 0; h < this->terminal_height; h++) {
                vector<int> row;
                for(int w = 0; w < this->terminal_width; w++) {
                    
                    row.push_back(0);
                }
                new_board.push_back(row);
            }
            this->board = new_board;
        }

        int[] adjust_coordinates_to_fit(double[] coordinates) {
            int[coordinates.size()] my;
            for(int i = 0; i < coordinates.size(); i++) {
                my[i] = coordinates[i] / 1;
            }
            return my;
        }

        /*
        * Places a ball on the board
        */
        // void place_ball(Ball b) {
        //     double[] coordinates = b.get_coordinates();
        //     // Modify coordinates to fit on grid
        //     int[] new_coordinates = adjust_coordinates_to_fit(coordinates);
        //     this->board.at(new_coordinates[0]).at(new_coordinates[1]) = 1;

        // }

        /*
        * Creates a string of the entire board for printing
        */
        string print_board() {
            string output = "";
            for(int h = 0; h < this->terminal_height; h++) {
                for (int w = 0; w < this->terminal_width; w++) {
                    std::cout << this->board.at(h).at(w);
                    output += std::to_string(this->board.at(h).at(w));
                }
                output += '\n';
            }
            std::cout << output;
            return output;
        }

        void render_module() {

        }

    private:
        int terminal_height;
        int terminal_width;
        vector<vector<int>> board;
};