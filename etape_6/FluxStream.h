#ifndef FLUX_STREAM_H
    #define  FLUX_STREAM_H

    #include <iostream>
    #include <string>

    class                           FluxStream
    {
        public:
            virtual                 ~FluxStream(){}
            virtual bool            close() = 0;
            virtual bool            open(std::string& filepath) = 0;
            virtual std::string&    read() = 0;
            virtual int             write(std::string& line) = 0;
    };
#endif
