class modem_connection {
  public:
    void dial();
    void hangup();
};

class modem_data {
  public:
    void send();
    void rcv();
};

class modem_impl {
  private:
    modem_connection connection;
    modem_data data;
};
