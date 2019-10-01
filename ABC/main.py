import base64


def hello_world(request):
    """Responds to any HTTP request.
    Args:
        request (flask.Request): HTTP request object.
    Returns:
        The response text or any set of values that can be turned into a
        Response object using
        `make_response <http://flask.pocoo.org/docs/1.0/api/#flask.Flask.make_response>`.
    """    
    if request.method == 'POST':
        if request.headers.get("Content-Type") == 'image/jpeg':
            img = request.data
            print(img)
            img_binary = base64.b64decode(img)
            result = base64.b64encode(img_binary)
            response = make_response(result, 200)
            response.mimetype = 'image/jpeg'
            print(response)
            return response
    else:
        print("POST以外")
        error = "a"