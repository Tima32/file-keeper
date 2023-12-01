#include <string>

namespace fk
{
    class settings
    {
        private:
        static const char* path;
        public:
        void load();
        void save() const;
    };
}
