FROM gcc:13.2.0

WORKDIR /usr/src/app

COPY . .

RUN apt-get -qq update \
    && apt-get -qq install --no-install-recommends cmake \
    && apt-get clean \
    && apt-get update && apt-get install make \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir obj

RUN make

CMD [ "./main" ]