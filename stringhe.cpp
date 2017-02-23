#include <iostream>
#include <string>

using namespace std;

bool e_palindroma(string x) {
  for (int i = 0; i < x.length() / 2; i++) {
    if (x[i] != x[x.length() - i - 1]) {
      return false;
    }
  }

  return true;
}

string sostituisci_carattere(string x, char y, char z) {
  for (int i = 0; i < x.length(); i++) {
    if (x[i] == y) {
      x[i] = z;
    }
  }

  return x;
}

string rimuovi_sottostringa_da_stringa(string x, string y) {
  string risultato = "";
  for (int i = 0; i < x.length(); i++) {
    bool sottostringa_trovata = false;
    
    for (int h = 0; h < y.length(); h++) {
      if (x[i + h] == y[h]) {
	sottostringa_trovata = true;
      } else {
	sottostringa_trovata = false;
      }
    }

    if (sottostringa_trovata) {
      i = i + y.length() - 1;
    } else {
      risultato = risultato + x[i];
    }
  }

  return risultato;
}
    	

int main() {
  string x;

  if ("" == x) {
    cout << "la stringa è vuota" << endl;
  }

  string y = "ciao io sono una stringa";
  string z("ciao, io sono un'altra stringa");

  cout << "y: " << y << endl;
  cout << "z: " << z << endl;

  cout << "y è lunga " << y.size() << " caratteri" << endl;
  cout << "z è lunga (usando length) " << z.length() << endl;

  cout << "i primi 4 caratteri di y sono: " << y.substr(0, 4) << endl;

  if (y.substr(0, 5) == z.substr(0, 5)) {
    cout << "y e z iniziano con gli stessi primi 4 caratteri"; 
  }

  string xx = "LARAL";

  if (e_palindroma(xx)) {
    cout << "xx è palindroma" << endl;
  } else {
    cout << "xx non è palindroma" << endl;
  }

  string asd = "Ciao io sono una stringa ma non sono palindroma";

  if (! e_palindroma(asd)) {
    cout << "Lo sapevamo anche noi, non c'era bisogno di tutta sta fola!" << endl;
  }

  if (e_palindroma("I TOPI NON AVEVANO NIPOTI")) {
    cout << "sì" << endl;
  } else {
    cout << "no" << endl;
  }

  string yy = "ciao";

  cout << sostituisci_carattere(yy, 'a', 'b') << endl;
  
  cout << rimuovi_sottostringa_da_stringa("ciaoiaiaiaxo", "ia") << endl;
  cout << rimuovi_sottostringa_da_stringa("ciaiaco", "ia") << endl;

  cout << rimuovi_sottostringa_da_stringa("I TOPI NON AVEVANO NIPOTI", " ") << endl;

  if (e_palindroma(rimuovi_sottostringa_da_stringa("I TOPI NON AVEVANO NIPOTI", " "))) {
    cout << "SEEEEEEEEEEE!!!!" << endl;
  }

  string i_topi = "I TOPI NON AVEVANO NIPOTI";
  
  if (e_palindroma(i_topi.replace(0, i_topi.size(), " "))) {
    cout << "SEEEEEEE!!!!!" << endl;
  }
    
  
  return 0;
}
