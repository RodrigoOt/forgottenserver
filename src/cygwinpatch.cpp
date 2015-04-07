/* Cygwin patches for ForgottenServer
 * by  rodrigo.
 *
 * Enjoy !!!
*/
#include "game.h"

namespace std {

	string to_string(long long xx){
		return boost::lexical_cast<std::string>(xx);
	}
}
