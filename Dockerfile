FROM epayet/sfml

ADD . /source
RUN cd /source && make

CMD /source/bin/release/monopoly
