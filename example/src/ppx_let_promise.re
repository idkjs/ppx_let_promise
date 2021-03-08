let map = (promise, ~f) => Js.Promise.then_((v) => Js.Promise.resolve(f(v)), promise);

let bind = (promise, ~f) => Js.Promise.then_(f, promise);

let both = (promise_a, promise_b) => Js.Promise.all2((promise_a, promise_b));

let return = Js.Promise.resolve;

module Let_syntax = {
  let return = return;
  let bind = bind;
  let map = map;
  let both = both;
  module Open_in_body = {
    let return = return;
  };
  module Open_on_rhs = {
    let return = return;
  };
};
