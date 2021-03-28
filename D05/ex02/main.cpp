#include "Form.hpp"

int main() {

	std::string target = "yassin";
	std::string  fileName = target.append("_shrubbery");
	std::ofstream file(fileName);
	file << "       **** \n     ******** \n    **  ****** \n     *   ******     ****** \n         ******   ********* \n          ****  *****   *** \n          ***  ***     ** \n    *************       * \n  ****************** \n *****   H*****H******* \n ***     H-___-H  ********* \n  ***    H     H      ******* \n   **    H-___-H        ***** \n     *   H     H         **** \n         H     H         *** \n         H-___-H         ** \n         H     H         * \n         H-___-H \n         ALOHA!";
	file.close();
}

