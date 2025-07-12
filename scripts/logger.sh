NOCOLOR='\033[0m'
RED='\033[1;31m'
GREEN='\033[1;32m'
YELLOW='\033[1;33m'
BLUE='\033[1;34m'
PURPLE='\033[1;35m'
CYAN='\033[1;36m'

success_log() { echo -e "${GREEN}[RELEASE]: $1${NOCOLOR}"; }

error_log() { echo -e "${RED}[RELEASE]: $1${NOCOLOR}"; }

info_log() { echo -e "${CYAN}[RELEASE]: $1${NOCOLOR}"; }

warn_log() { echo -e "${YELLOW}[RELEASE]: $1${NOCOLOR}"; }

command_snippet() { echo -e "${GREEN}> ${BLUE}$1 ${PURPLE}$2${NOCOLOR}"; }
