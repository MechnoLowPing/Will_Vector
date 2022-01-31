#ifndef vector_hpp
#define vector_hpp
#include<vector>
#include<queue>

namespace vectorcalc{

    struct vector_T{
    
        private:
        std::vector<int> _container{0,1};

        public:
        void mainloop();
        void addition();
    };

    struct queue_T{

        private:
        std::queue<int> _container{};

        public:
        void mainloop();
        void addition();

    };

}



#endif