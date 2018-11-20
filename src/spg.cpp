#include <Rcpp.h>
using namespace Rcpp;

//' @export
// [[Rcpp::export]]
NumericVector st_petersburg_game(
    unsigned int n_games = 10,
    double fee = 10
){
 // St Petersburg game
  NumericVector gains(n_games); 
  bool head;
  int bet;
  NumericVector x(1);
  
  for(unsigned int i(0);i<n_games;++i){
    head = true;
    bet = 1;
    
    do{
      // toss a coin
      x = rbinom(1,1,0.5);
    
      // Verify coin
      if(x(0) == 0){
        head = false;
      }
      
      // update bet
      bet *= 2;
    } while (head);
    
    gains(i) = bet - fee;
  }
  
  return gains;
}